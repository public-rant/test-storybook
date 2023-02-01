COMPOSE_RUN=docker compose -f compose-dev.yaml run --rm

POSTGRESQL_URL=
MIGRATIONS=$(COMPOSE_RUN) migrate 
DROP=$(COMPOSE_RUN) migrate drop ${POSTGRESQL_URL}
#
# ext ?= sql
#
# migration:
# 	$(COMPOSE_RUN) migrate create -ext $(ext) -dir db/migrations -seq onlyplans
#
# version=$(v)
#
# %:
# 	$(MIGRATIONS) $@ $(version)
#
# drop:
# 	$(DROP)
#
# createdb:
# 	docker exec onlyplans-db-1 psql -h localhost -U postgres -w -c "create database onlyplans;"
#
#
migrate:
	$(COMPOSE_RUN) $@

targets = force up down create

$(targets):
	$(compose) --env-file $@.env $@
