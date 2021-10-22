struct song_list {
  char *name;
  char *artist;
  struct song_list *next;
 };
 int less_than(struct song_list *, struct song_list *);
