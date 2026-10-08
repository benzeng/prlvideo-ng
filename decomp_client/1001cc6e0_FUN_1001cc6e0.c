
undefined4 FUN_1001cc6e0(void)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_48 [8];
  long local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  int local_28;
  
  MacUtils::getProcessesInfo();
  FUN_1001c1b20(&local_40,local_48);
  local_38 = (undefined8 *)(local_40 + 0x10 + (long)*(int *)(local_40 + 8) * 8);
  local_30 = (undefined8 *)(local_40 + 0x10 + (long)*(int *)(local_40 + 0xc) * 8);
  local_28 = 1;
  FUN_1001c1230(local_48);
  uVar4 = 0;
  if ((local_28 != 0) && (uVar4 = 0, local_38 != local_30)) {
    do {
      puVar1 = (undefined4 *)*local_38;
      lVar2 = *(long *)(puVar1 + 2);
      iVar3 = QString::compare_helper
                        (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),"WindowServer",
                         0xffffffff,1);
      if (iVar3 == 0) {
        uVar4 = *puVar1;
        break;
      }
      local_38 = local_38 + 1;
      local_28 = 1;
    } while (local_38 != local_30);
  }
  FUN_1001c1230(&local_40);
  return uVar4;
}

