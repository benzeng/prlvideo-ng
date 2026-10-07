
void FUN_1000cb6c0(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 *local_38;
  undefined4 *puStack_30;
  undefined4 *local_28;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",2,"Resume finished with code 0x%X",*(undefined4 *)(param_1 + 500));
  }
  FUN_1000d68b0(param_1 + 0x2b8);
  iVar2 = *(int *)(param_1 + 500);
  if ((iVar2 != -0x7ffffd8b) && (iVar2 != -0x7ffeffed)) {
    if (iVar2 == -0x7ffdffe0) {
      local_38 = (undefined4 *)0x0;
      puStack_30 = (undefined4 *)0x0;
      local_28 = (undefined4 *)0x0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_5c = 0x3e81;
      FUN_10002de70(&local_38,&local_5c);
      local_60 = 0x3e9e;
      if (puStack_30 == local_28) {
        FUN_10002de70(&local_38,&local_60);
      }
      else {
        *puStack_30 = 0x3e9e;
        puStack_30 = puStack_30 + 1;
      }
      uVar1 = DAT_1011c3650;
      FUN_10002ddb0(local_90,&local_58);
      FUN_10006a5d0(local_78,local_90);
      iVar2 = FUN_1000648b0(uVar1,0x3304,&local_38,local_78);
      FUN_10006a680(local_78);
      FUN_10002d9d0(local_90);
      if (iVar2 == 0x3e9e) {
        QFile::remove((QString *)(param_1 + 0x1d0));
        QFile::remove((QString *)(param_1 + 0x1d8));
        QFile::remove((QString *)(param_1 + 0x1e0));
        uVar3 = 0x80020019;
        if (*(long *)(*(long *)(param_1 + 0x2b0) + 0x1940) != 0) {
          FUN_10008bf70();
        }
      }
      else {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x2b0) + 0x1940) + 0xd8) = 0;
        uVar3 = 0x80000275;
      }
      *(undefined4 *)(param_1 + 500) = uVar3;
      FUN_10002d9d0(&local_58);
      if (local_38 != (undefined4 *)0x0) {
        if (puStack_30 != local_38) {
          puStack_30 = (undefined4 *)
                       ((~((long)puStack_30 + (-4 - (long)local_38)) & 0xfffffffffffffffcU) +
                       (long)puStack_30);
        }
        operator_delete(local_38);
      }
    }
    else {
      QFile::remove((QString *)(param_1 + 0x1d0));
      QFile::remove((QString *)(param_1 + 0x1d8));
      QFile::remove((QString *)(param_1 + 0x1e0));
      if (*(long *)(*(long *)(param_1 + 0x2b0) + 0x1940) != 0) {
        FUN_10008bf70();
        return;
      }
    }
  }
  return;
}

