/* Generated by Frama-C */
int main(int argc, char **argv)
{
  int __retres;
  __e_acsl_memory_init(& argc,& argv,8UL);
  __e_acsl_store_block((void *)(& argc),4UL);
  {
    int *p;
    __e_acsl_store_block((void *)(& p),8UL);
    switch (argc) {
      default: ;
      __e_acsl_full_init((void *)(& p));
      p = & argc;
      break;
    }
    __e_acsl_delete_block((void *)(& p));
  }
  __retres = 0;
  __e_acsl_delete_block((void *)(& argc));
  __e_acsl_memory_clean();
  return __retres;
}


