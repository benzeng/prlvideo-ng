
ulong FUN_100335b50(long param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  undefined1 local_78 [32];
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar3 = (ulong)*(ushort *)(param_2 + 2);
  if (uVar3 == 0) {
    if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
       (uVar7 = param_2 + 0x14, uVar7 <= *(ulong *)(param_1 + 0xbc00))) goto LAB_100335bc4;
    puVar2 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar2 = param_2;
    *(undefined4 *)(puVar2 + 1) = 0x14;
  }
  else {
    lVar6 = uVar3 * 0x10 + 0x14;
    if ((*(ulong *)(param_1 + 0xbbf8) <= param_2) &&
       (uVar7 = lVar6 + param_2, uVar7 <= *(ulong *)(param_1 + 0xbc00))) {
LAB_100335bc4:
      local_40 = *(undefined8 *)(param_1 + 0xbb50);
      local_38 = *(undefined8 *)(param_1 + 0xbb58);
      bVar9 = *(int *)(param_1 + 0x8528) != 0;
      uVar5 = (ulong)bVar9;
      local_58 = (undefined8 *)0x0;
      puStack_50 = (undefined8 *)0x0;
      local_48 = 0;
      if ((*(byte *)(param_2 + 4) & 8) != 0) {
        if (*(int *)(param_1 + 0x8528) == 0) {
          local_40 = *(undefined8 *)(param_1 + 0x198);
          local_38 = *(undefined8 *)(param_1 + 0x1a0);
          bVar9 = true;
          uVar5 = 1;
        }
        else {
          FUN_10038ead0(&local_40,&local_40);
          uVar3 = (ulong)*(ushort *)(param_2 + 2);
        }
      }
      if ((short)uVar3 == 0) {
        puVar4 = &local_40;
      }
      else if (bVar9) {
        uVar5 = (long)puStack_50 - (long)local_58 >> 4;
        if (uVar5 < uVar3) {
          FUN_1003402a0(&local_58);
        }
        else if ((uVar3 < uVar5) && (puStack_50 != local_58 + uVar3 * 2)) {
          puStack_50 = (undefined8 *)
                       ((~((long)puStack_50 + (-0x10 - (long)(local_58 + uVar3 * 2))) &
                        0xfffffffffffffff0U) + (long)puStack_50);
        }
        lVar6 = param_2 + 0x14;
        lVar8 = 0;
        uVar5 = 0;
        do {
          bVar1 = FUN_10038ead0(local_58 + (long)(int)uVar5 * 2,&local_40,lVar6);
          uVar5 = (ulong)((int)uVar5 + (uint)bVar1);
          lVar8 = lVar8 + 1;
          lVar6 = lVar6 + 0x10;
          puVar4 = local_58;
        } while (lVar8 < (long)uVar3);
      }
      else {
        puVar4 = (undefined8 *)(param_2 + 0x14);
        uVar5 = uVar3;
      }
      FUN_100361430(local_78,param_2 + 4,uVar5,puVar4);
      FUN_100361640(*(undefined8 *)(param_1 + 48000),local_78);
      if (local_58 != (undefined8 *)0x0) {
        if (puStack_50 != local_58) {
          puStack_50 = (undefined8 *)
                       ((~((long)puStack_50 + (-0x10 - (long)local_58)) & 0xfffffffffffffff0U) +
                       (long)puStack_50);
        }
        operator_delete(local_58);
      }
      return uVar7;
    }
    puVar2 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar2 = param_2;
    *(int *)(puVar2 + 1) = (int)lVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar2,&PTR_vtable_101117a68,0);
}

