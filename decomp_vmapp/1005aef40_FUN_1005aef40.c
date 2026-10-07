
undefined1 FUN_1005aef40(long param_1)

{
  int iVar1;
  char cVar2;
  int local_1c;
  
  local_1c = 0;
  cVar2 = FUN_1007080a0(param_1 + 0x28,*(undefined8 *)(param_1 + 0x10b8),
                        *(undefined4 *)(param_1 + 0x10b4),&local_1c,0x3000);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(param_1 + 0x10b4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10b4);
    if (iVar1 == local_1c) {
      return 1;
    }
  }
  FUN_1008e3970("","vdisk",0,"Unable to write bitmap (written %u, expected %u), err = %u",local_1c,
                iVar1,*(undefined4 *)(param_1 + 0x3c));
  return 0;
}

