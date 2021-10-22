#include <string.h>
struct song_list {
  char *name;
  char *artist;
  struct song_list *next;
 };
 int less_than(struct song_list *a, struct song_list *b) {
   int name_cmp = strcasecmp(a->name, b->name);
   if (name_cmp < 0) {
     return 1;
   }
   if (name_cmp > 0) {
     return 0;
   }
   int artist_cmp = strcasecmp(a->artist, b->artist);
   if (artist_cmp < 0) {
     return 1;
   }
   return 0;
 }
