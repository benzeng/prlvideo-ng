
undefined8 FUN_1002e7f30(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 7;
  if (*(int *)(param_1 + 0x128) == 0) {
    iVar1 = FUN_100410a30(param_1 + 0x12f,*(undefined1 *)(param_1 + 0x12e),
                          *(undefined8 *)(param_1 + 0x50),0,param_1 + 0x150,0x12);
    uVar2 = 5;
    if ((-1 < iVar1) && (uVar2 = 4, *(char *)(param_1 + 0x182) != '\0')) {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x30))();
      if ((iVar1 < 0) && (-1 < DAT_1011c568c)) {
        FUN_1008e3970("","USB",0,"[MSC] Failed to synchronize cache");
      }
    }
  }
  return uVar2;
}

