
void FUN_10035f840(long param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_10;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (param_2 == 0) {
    lVar2 = *(long *)(*(long *)(lVar1 + 0x18) + 0x48);
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(lVar2 + 4) == 0) {
      return;
    }
    param_2 = *(long *)(*(long *)(lVar1 + 0x18) + 0x50);
    if (param_2 == 0) {
      return;
    }
  }
  if (*(char *)(lVar1 + 0x38) == '\0') {
    local_10 = *(undefined8 *)(lVar1 + 0x28);
    FUN_10035f480(lVar1,param_2,&local_10,param_3);
  }
  return;
}

