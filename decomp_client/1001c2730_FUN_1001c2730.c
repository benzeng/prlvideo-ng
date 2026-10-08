
void FUN_1001c2730(void)

{
  char cVar1;
  char local_29;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  
  _GetCurrentProcess(local_20);
  _GetFrontProcess(local_28);
  _SameProcess(local_20,local_28,&local_29);
  cVar1 = _IsProcessVisible(local_20);
  if (((cVar1 == '\0') || (local_29 != '\0')) &&
     (_ShowHideProcess(local_20,cVar1 == '\0'), local_29 != '\0' || cVar1 != '\0')) {
    return;
  }
  _SetFrontProcess(local_20);
  return;
}

