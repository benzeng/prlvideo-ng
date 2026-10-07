
undefined8 * FUN_100575720(long *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar1 = (**(code **)(*param_1 + 0x328))();
  uVar10 = (ulong)uVar1;
  FUN_1007d6870(local_48);
  puVar4 = (undefined8 *)FUN_10057e020(uVar10,param_2,local_48,param_3);
  puVar6 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    iVar2 = FUN_1007dae30(*puVar4);
    uVar5 = 0x80000003;
    if (iVar2 != -0x16) {
      if (iVar2 == -0xc) {
        uVar5 = 0x80000002;
      }
      else {
        if (iVar2 == 0) {
          *param_3 = 0;
          puVar6 = puVar4;
          if (uVar10 != 0) {
            uVar9 = 0;
            do {
              local_60 = 0xffffffffffffffff;
              local_68 = 0xffffffffffffffff;
              local_50 = 0;
              local_58 = 0;
              iVar2 = (**(code **)(*param_1 + 0x358))(param_1,0xffffffff,uVar9,&local_68);
              if (iVar2 < 0) {
                pcVar7 = "Warning: failed to get group element ptr: %x";
LAB_1005758c4:
                FUN_1008e3970("","vdisk",0,pcVar7,iVar2);
                FUN_1008e3970("","vdisk",0,"Warning: less accurate dirty bitmap is generated");
                break;
              }
              if ((int)local_60 == -1) {
                uVar8 = *(uint *)(param_1 + 0x224) + uVar9;
                if (uVar10 <= *(uint *)(param_1 + 0x224) + uVar9) {
                  uVar8 = uVar10;
                }
                iVar3 = FUN_1007dba90(*puVar4,(int)(uVar8 - 1 >> (*(byte *)(puVar4 + 1) & 0x3f)) + 1
                                      ,uVar9 >> (*(byte *)(puVar4 + 1) & 0x3f));
                if (iVar3 != 0) {
                  iVar2 = -0x7ffffffd;
                  if (iVar3 != -0x16) {
                    if (iVar3 == -0xc) {
                      iVar2 = -0x7ffffffe;
                    }
                    else {
                      iVar2 = -0x7fffffff;
                    }
                  }
                  pcVar7 = "Warning: failed to clear range in bitamp: %x";
                  goto LAB_1005758c4;
                }
              }
              uVar9 = uVar9 + *(uint *)(param_1 + 0x224);
            } while (uVar9 < uVar10);
          }
          goto LAB_100575882;
        }
        uVar5 = 0x80000001;
      }
    }
    *param_3 = uVar5;
    FUN_1007dade0(*puVar4);
    operator_delete(puVar4);
    puVar6 = (undefined8 *)0x0;
  }
LAB_100575882:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar6;
}

