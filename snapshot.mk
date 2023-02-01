create:
	docker compose -f snapshot.yml --env-file snapshot.env up
down:
	docker compose -f snapshot.yml --env-file snapshot.env down
