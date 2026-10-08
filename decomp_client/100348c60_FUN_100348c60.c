
void FUN_100348c60(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_RAX;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulong)in_RAX >> 0x20);
  FUN_100348850();
  if (param_2 == 0x30000005) {
    iVar2 = FUN_100d798a0(param_1 + 0x30);
    bVar6 = iVar2 == 1;
  }
  else if (param_2 == 0x30000004) {
    cVar1 = FUN_100348d40(param_1);
    if (cVar1 == '\0') {
      bVar6 = false;
    }
    else {
      uVar3 = FUN_100d798a0(param_1 + 0x30);
      FUN_100348e30(param_1,uVar3);
      bVar6 = false;
    }
  }
  else {
    bVar6 = false;
  }
  if (((bool)*(char *)(param_1 + 0x50) != bVar6) &&
     (*(bool *)(param_1 + 0x50) = bVar6, 1 < DAT_10230ffd0)) {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar3 = FUN_10018a9d0(uVar5);
    uVar4 = FUN_100d798a0(param_1 + 0x30);
    FUN_100df99c0("","prl_client_app",2,
                  "set dimmedSleep to %d (new VmState = 0x%08X; dspState = %d)",bVar6,uVar3,
                  CONCAT44(uVar7,uVar4));
  }
  return;
}

