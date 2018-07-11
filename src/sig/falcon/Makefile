ENABLE_SIGS+=$(findstring falcon_512, $(SIGS_TO_ENABLE))
ENABLE_SIGS+=$(findstring falcon_768, $(SIGS_TO_ENABLE))
ENABLE_SIGS+=$(findstring falcon_1024, $(SIGS_TO_ENABLE))

HEADERS_SIG_FALCON=src/sig/falcon/sig_falcon.h
HEADERS_SIG+=$(HEADERS_SIG_FALCON)

OBJECT_DIRS+=.objs/sig/falcon
OBJECTS_SIG_FALCON=.objs/sig/falcon/sig_falcon.o
OBJECTS_SIG+=$(OBJECTS_SIG_FALCON)

TO_CLEAN+= $(OBJECTS_SIG_FALCON)

.objs/sig/falcon/sig_falcon.o: headers src/sig/falcon/sig_falcon.c
	$(CC) -c src/sig/falcon/sig_falcon.c -o .objs/sig/falcon/sig_falcon.o $(CFLAGS)

# --
#  Falcon 512
# --

ifneq (,$(findstring falcon_512, $(ENABLE_SIGS)))
UPSTREAMS+=sig_falcon_512
endif

SOURCES_SIG_FALCON_512:=$(wildcard src/sig/falcon/upstream/Optimized_Implementation/falcon512/*.c)
HEADERS_SIG_FALCON_512:=$(wildcard src/sig/falcon/upstream/Optimized_Implementation/falcon512/*.h)
OBJECTS_SIG_FALCON_512=$(SOURCES_SIG_FALCON_512:.c=.o)

TO_CLEAN+= $(OBJECTS_SIG_FALCON_512)

src/sig/falcon/upstream/Optimized_Implementation/falcon512/%.o: src/sig/falcon/upstream/Optimized_Implementation/falcon512/%.c $(HEADERS_SIG_FALCON_512)
	$(CC) -c -fPIC -O3 -std=c99 -Wall -Werror -o $@ $<

sig_falcon_512: $(OBJECTS_SIG_FALCON_512)
	bash scripts/collect_objects.sh sig_falcon_512 $(OBJECTS_SIG_FALCON_512)
	bash scripts/symbols_global_rename.sh sig_falcon_512 src/sig/falcon/symbols_global_rename_512.txt
	bash scripts/symbols_local.sh sig_falcon_512 src/sig/falcon/symbols_local.txt

# --
#  Falcon 768
# --

ifneq (,$(findstring falcon_768, $(ENABLE_SIGS)))
UPSTREAMS+=sig_falcon_768
endif

SOURCES_SIG_FALCON_768:=$(wildcard src/sig/falcon/upstream/Optimized_Implementation/falcon768/*.c)
HEADERS_SIG_FALCON_768:=$(wildcard src/sig/falcon/upstream/Optimized_Implementation/falcon768/*.h)
OBJECTS_SIG_FALCON_768=$(SOURCES_SIG_FALCON_768:.c=.o)

TO_CLEAN+= $(OBJECTS_SIG_FALCON_768)

src/sig/falcon/upstream/Optimized_Implementation/falcon768/%.o: src/sig/falcon/upstream/Optimized_Implementation/falcon768/%.c $(HEADERS_SIG_FALCON_768)
	$(CC) -c -fPIC -O3 -std=c99 -Wall -Werror -o $@ $<

sig_falcon_768: $(OBJECTS_SIG_FALCON_768)
	bash scripts/collect_objects.sh sig_falcon_768 $(OBJECTS_SIG_FALCON_768)
	bash scripts/symbols_global_rename.sh sig_falcon_768 src/sig/falcon/symbols_global_rename_768.txt
	bash scripts/symbols_local.sh sig_falcon_768 src/sig/falcon/symbols_local.txt

# --
#  Falcon 1024
# --

ifneq (,$(findstring falcon_1024, $(ENABLE_SIGS)))
UPSTREAMS+=sig_falcon_1024
endif

SOURCES_SIG_FALCON_1024:=$(wildcard src/sig/falcon/upstream/Optimized_Implementation/falcon1024/*.c)
HEADERS_SIG_FALCON_1024:=$(wildcard src/sig/falcon/upstream/Optimized_Implementation/falcon1024/*.h)
OBJECTS_SIG_FALCON_1024=$(SOURCES_SIG_FALCON_1024:.c=.o)

TO_CLEAN+= $(OBJECTS_SIG_FALCON_1024)

src/sig/falcon/upstream/Optimized_Implementation/falcon1024/%.o: src/sig/falcon/upstream/Optimized_Implementation/falcon1024/%.c $(HEADERS_SIG_FALCON_1024)
	$(CC) -c -fPIC -O3 -std=c99 -Wall -Werror -o $@ $<

sig_falcon_1024: $(OBJECTS_SIG_FALCON_1024)
	bash scripts/collect_objects.sh sig_falcon_1024 $(OBJECTS_SIG_FALCON_1024)
	bash scripts/symbols_global_rename.sh sig_falcon_1024 src/sig/falcon/symbols_global_rename_1024.txt
	bash scripts/symbols_local.sh sig_falcon_1024 src/sig/falcon/symbols_local.txt
