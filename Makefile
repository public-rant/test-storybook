include docker-extension.mk

include migrations.mk

up:
	docker compose -f compose-dev.yaml --env-file .env up -d

down:
	docker compose -f compose-dev.yaml down

build:
	docker compose -f compose-dev.yaml build editor


VOLUMES = postgresql restic editor node_modules calcurse

volumes: $(VOLUMES)
	for item in $?; do docker volume create $$item; done

docker-compose.yaml: $(VOLUMES)
	for item in $?; do echo "\n$$item\:\n\texternal: true" >> $@

.PHONY: $(VOLUMES)
