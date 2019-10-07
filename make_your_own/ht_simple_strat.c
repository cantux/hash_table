#include "ht_simple_strat.h"

ht_item* ht_simple_get(ht_table* htable, const char* key) {
  int hash = ht_hash(key);
  return htable->items[hash % htable->size];
}

int ht_simple_set(ht_table* htable, ht_item* item) {
  int hash = ht_hash(item->key);
  htable->items[hash % htable->size] = item;
  return 0;
}

