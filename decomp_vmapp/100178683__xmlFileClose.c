
int _xmlFileClose(void *context)

{
  int iVar1;
  int local_28;
  int local_24;
  
  if (context == (void *)0x0) {
    local_28 = -1;
  }
  else if ((context == *(void **)PTR____stdoutp_100ba2338) ||
          (context == *(void **)PTR____stderrp_100ba2328)) {
    iVar1 = _fflush(context);
    if (iVar1 < 0) {
      FUN_100177e16(0,"fflush()");
    }
    local_28 = 0;
  }
  else if (context == *(void **)PTR____stdinp_100ba2330) {
    local_28 = 0;
  }
  else {
    iVar1 = _fclose(context);
    if (iVar1 == -1) {
      local_24 = -1;
    }
    else {
      local_24 = 0;
    }
    if (local_24 < 0) {
      FUN_100177e16(0,"fclose()");
    }
    local_28 = local_24;
  }
  return local_28;
}

