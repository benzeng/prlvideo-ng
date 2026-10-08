
long FUN_100be85f0(long param_1)

{
  long lVar1;
  
  FUN_100bf2780(9,0xe,"ssl_sess.c",0xa5);
  lVar1 = *(long *)(param_1 + 0x130);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0xc0) = *(int *)(lVar1 + 0xc0) + 1;
  }
  FUN_100bf2780(10,0xe,"ssl_sess.c",0xa9);
  return lVar1;
}

