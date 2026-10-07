
void FUN_10070d2e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                  uint param_5,long param_6,undefined8 param_7,long *param_8,undefined8 param_9)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar9;
  undefined8 *in_stack_ffffffffffffff80;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar11;
  undefined8 uVar10;
  undefined4 local_34;
  
  uVar11 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
  uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 0x20);
  param_5 = param_5 & 1;
  uVar6 = (undefined4)param_1;
  if (param_5 == 0) {
    uVar3 = FUN_100761e40(param_1,param_3,param_4,param_2,param_7,param_9);
  }
  else {
    uVar3 = FUN_1007620a0(param_1,param_3,param_4,param_2);
  }
  local_34 = 0;
  if ((long)uVar3 < 0) {
    local_34 = FUN_100768f60();
    if (param_4 == 1) {
      pcVar7 = "pread";
      if (param_5 != 0) {
        pcVar7 = "pwrite";
      }
      uVar10 = param_3[1];
      pcVar5 = "DIO ERROR %d: %s(%d, %p, %zu, %llx)";
      in_stack_ffffffffffffff80 = (undefined8 *)*param_3;
    }
    else {
      pcVar7 = "preadv";
      if (param_5 != 0) {
        pcVar7 = "pwritev";
      }
      uVar10 = CONCAT44(uVar11,param_4);
      pcVar5 = "DIO ERROR %d: %s(%d, %p, %d) @ %llx";
      in_stack_ffffffffffffff80 = param_3;
    }
    FUN_1008e3970("","AbstractFile",0,pcVar5,local_34,pcVar7,CONCAT44(uVar9,uVar6),
                  in_stack_ffffffffffffff80,uVar10,param_2);
  }
  if (param_6 != 0) {
    do {
      lVar2 = *(long *)(param_6 + 0x20);
      *(undefined8 *)(param_6 + 0x20) = 0;
      pvVar4 = *(void **)(param_6 + 0x38);
      if (pvVar4 != (void *)0x0) {
        if ((0 < (long)uVar3) && ((*(byte *)(param_6 + 8) & 1) == 0)) {
          FUN_10070b090(param_6 + 0x50,pvVar4,
                        *(int *)(param_6 + 0x50) - *(int *)(param_3 + (long)(param_4 + -1) * 2 + 1))
          ;
          pvVar4 = *(void **)(param_6 + 0x38);
        }
        _free(pvVar4);
        *(undefined8 *)(param_6 + 0x38) = 0;
      }
      uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff80 >> 0x20);
      uVar8 = (uint)uVar3;
      if ((long)uVar3 < 0) {
        *(uint *)(param_6 + 8) = *(uint *)(param_6 + 8) | -uVar8;
        *(undefined4 *)(param_6 + 0x28) = local_34;
      }
      else {
        uVar1 = *(uint *)(param_6 + 0x50);
        if (uVar8 < uVar1) {
          if ((*(byte *)(param_6 + 8) & 1) == 0) {
            in_stack_ffffffffffffff80 = (undefined8 *)CONCAT44(uVar9,uVar1);
            FUN_1008e3970("","AbstractFile",0,
                          "ERROR: read beyond: fd %d, lba %llx, size %llx, dio size %x, res %llx",
                          uVar6,param_2,param_7,in_stack_ffffffffffffff80,uVar3);
            *(byte *)(param_6 + 8) = *(byte *)(param_6 + 8) | 0x20;
            FUN_10070b2d0((int *)(param_6 + 0x50),uVar3 & 0xffffffff,
                          *(int *)(param_6 + 0x50) - uVar8);
            uVar3 = 0;
          }
          else {
            local_34 = FUN_100768f60();
            in_stack_ffffffffffffff80 =
                 (undefined8 *)CONCAT44(uVar9,*(undefined4 *)(param_6 + 0x50));
            FUN_1008e3970("","AbstractFile",0,
                          "ERROR: partial write: fd %d, lba %llx, size %llx, dio size %x, res %llx",
                          uVar6,param_2,param_7,in_stack_ffffffffffffff80,uVar3);
            *(byte *)(param_6 + 8) = *(byte *)(param_6 + 8) | 8;
            *(undefined4 *)(param_6 + 0x28) = local_34;
            uVar3 = 0;
          }
        }
        else {
          uVar3 = uVar3 - uVar1;
        }
      }
      if (((*(uint *)(param_6 + 8) & 0x4000) != 0) && (DAT_1011ccc18 != (code *)0x0)) {
        (*DAT_1011ccc18)(1,0x32,param_6 << 8 | 2);
      }
      if (param_8 == (long *)0x0) {
        (**(code **)(**(long **)(param_6 + 0x40) + 0x18))();
        FUN_10070aed0(param_6);
      }
      else {
        *(undefined8 *)(param_6 + 0x20) = 0;
        if (param_8[1] == 0) {
          *param_8 = param_6;
          param_8[1] = param_6;
        }
        else {
          *(long *)(param_8[1] + 0x20) = param_6;
          param_8[1] = param_6;
        }
      }
      param_6 = lVar2;
    } while (lVar2 != 0);
  }
  return;
}

