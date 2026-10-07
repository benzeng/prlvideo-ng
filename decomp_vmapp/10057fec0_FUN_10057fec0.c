
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10057fec0(long *param_1,long param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long local_58;
  long lStack_50;
  undefined1 local_48 [16];
  
  iVar2 = 0;
  if (param_1[0x236] != 0) {
    if (param_2 == 0) {
      FUN_1008e3970("","vdisk",0,"Incorrect data pointer specified for encryption");
      iVar2 = -0x7ffffffd;
    }
    else {
      uVar1 = *(uint *)(param_2 + 0x10);
      if (((uVar1 & 0x1ff) == 0) && (*(int *)(param_2 + 4) == 1)) {
        pvVar4 = *(void **)(param_2 + 8);
        local_48._8_8_ = param_3;
        local_48._0_8_ = param_3;
        uVar9 = (undefined4)((ulong)param_3 >> 0x20);
        if (param_4 == '\0') {
          iVar2 = 0;
          if (uVar1 >> 9 != 0) {
            auVar8._8_4_ = (int)param_3;
            auVar8._0_8_ = param_3;
            auVar8._12_4_ = uVar9;
            iVar2 = 0;
            uVar5 = 1;
            do {
              iVar3 = _memcmp(pvVar4,(void *)((long)pvVar4 + 1),0x1ff);
              local_58 = auVar8._0_8_;
              lStack_50 = auVar8._8_8_;
              if (iVar3 != 0) {
                iVar2 = (**(code **)(*(long *)param_1[0x236] + 0x40))
                                  ((long *)param_1[0x236],pvVar4,0x200,local_48);
                local_58 = local_48._0_8_;
                lStack_50 = local_48._8_8_;
              }
              auVar8._0_8_ = local_58 + _DAT_100b46eb0;
              auVar8._8_8_ = lStack_50 + _UNK_100b46eb8;
              if (iVar2 < 0) {
                return iVar2;
              }
              pvVar4 = (void *)((long)pvVar4 + 0x200);
              bVar6 = uVar5 < uVar1 >> 9;
              uVar5 = uVar5 + 1;
              local_48 = auVar8;
            } while (bVar6);
          }
        }
        else {
          iVar2 = (**(code **)(*param_1 + 0x3d0))(param_1,param_2);
          if (iVar2 < 0) {
            FUN_1008e3970("","vdisk",0,"Data shadowing for encryption failed with code 0x%x",iVar2);
          }
          else if (uVar1 >> 9 != 0) {
            pvVar4 = *(void **)(param_2 + 8);
            auVar7._8_4_ = (int)param_3;
            auVar7._0_8_ = param_3;
            auVar7._12_4_ = uVar9;
            uVar5 = 1;
            do {
              iVar3 = _memcmp(pvVar4,(void *)((long)pvVar4 + 1),0x1ff);
              local_58 = auVar7._0_8_;
              lStack_50 = auVar7._8_8_;
              if (iVar3 != 0) {
                iVar2 = (**(code **)(*(long *)param_1[0x236] + 0x38))
                                  ((long *)param_1[0x236],pvVar4,0x200,local_48);
                local_58 = local_48._0_8_;
                lStack_50 = local_48._8_8_;
              }
              auVar7._0_8_ = local_58 + _DAT_100b46eb0;
              auVar7._8_8_ = lStack_50 + _UNK_100b46eb8;
              if (iVar2 < 0) {
                return iVar2;
              }
              pvVar4 = (void *)((long)pvVar4 + 0x200);
              bVar6 = uVar5 < uVar1 >> 9;
              uVar5 = uVar5 + 1;
              local_48 = auVar7;
            } while (bVar6);
          }
        }
      }
      else {
        FUN_1008e3970("","vdisk",0,"Incorrect parameters specified for encryption %u:%u",uVar1);
        iVar2 = -0x7ffffffd;
      }
    }
  }
  return iVar2;
}

