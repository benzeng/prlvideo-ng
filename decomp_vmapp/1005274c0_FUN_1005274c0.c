
undefined8
FUN_1005274c0(long param_1,undefined8 *param_2,undefined8 *param_3,void *param_4,int param_5,
             undefined8 param_6,undefined8 *param_7)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  size_t sVar9;
  undefined8 *local_40;
  undefined1 local_38 [8];
  
  if (((((*(int *)(param_2 + 4) < -250000) || (*(int *)((long)param_2 + 0x24) < -250000)) ||
       (250000 < *(int *)(param_2 + 5))) ||
      ((*(int *)((long)param_2 + 0x2c) < *(int *)((long)param_2 + 0x24) ||
       (*(int *)(param_2 + 5) < *(int *)(param_2 + 4))))) ||
     (250000 < *(int *)((long)param_2 + 0x2c))) {
    uVar8 = 0xf0000003;
    if ((0 < DAT_1011b55f8) &&
       (FUN_1008e3970("CHRSERVER","ChrDAStorage",1,
                      "Window bounds are invalid. Ignore it: [0x%08X] pid=%d",*(undefined4 *)param_2
                      ,*(undefined4 *)(param_2 + 1)), 0 < DAT_1011b55f8)) {
      iVar3 = *(int *)((long)param_2 + 0x2c) - *(int *)((long)param_2 + 0x24);
      FUN_1008e3970("CHRSERVER","ChrDAStorage",1,"  guest bounds [%d;%d]-[%d;%d] w=%d; h=%d",
                    *(int *)(param_2 + 4),*(int *)((long)param_2 + 0x24),*(int *)(param_2 + 5),
                    *(int *)((long)param_2 + 0x2c),*(int *)(param_2 + 5) - *(int *)(param_2 + 4),
                    iVar3);
      if (0 < DAT_1011b55f8) {
        uVar1 = *(uint *)(param_2 + 2);
        FUN_1008e3970("CHRSERVER","ChrDAStorage",1,
                      "  hidden=%d tool=%d appwnd=%d layered=%d nrects=%d",uVar1 >> 6 & 1,
                      uVar1 >> 4 & 1,uVar1 >> 10 & 1,uVar1 >> 5 & 1,
                      *(undefined4 *)((long)param_2 + 0x14),iVar3);
      }
    }
  }
  else {
    puVar4 = _malloc(0xa0);
    local_40 = puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      FUN_1008e3970("CHRSERVER","ChrDAStorage",0,"Failed to allocate memory (%ld bytes)",0xa0);
      uVar8 = 0xf0000004;
    }
    else {
      ___bzero(puVar4,0xa0);
      puVar4[6] = param_2[5];
      puVar4[5] = param_2[4];
      puVar4[4] = param_2[3];
      puVar4[3] = param_2[2];
      uVar8 = *param_2;
      puVar4[2] = param_2[1];
      puVar4[1] = uVar8;
      uVar1 = *(uint *)((long)param_2 + 0x14);
      puVar7 = puVar4;
      if ((ulong)uVar1 != 0) {
        uVar6 = (ulong)(uVar1 * 0x10 + 0xff & 0xffffff00);
        pvVar5 = _malloc(uVar6);
        puVar7 = local_40;
        puVar4[7] = pvVar5;
        if ((void *)local_40[7] == (void *)0x0) {
          FUN_1008e3970("CHRSERVER","ChrDAStorage",0,
                        "Failed to alocate memory for window shape (%d bytes)",uVar6);
          *(undefined4 *)((long)puVar7 + 0x1c) = 0;
        }
        else {
          _memcpy((void *)local_40[7],param_2 + 6,(ulong)uVar1 << 4);
        }
      }
      uVar1 = *(uint *)(param_2 + 3);
      puVar4 = puVar7;
      if ((ulong)uVar1 != 0) {
        uVar6 = (ulong)(uVar1 * 2 + 0xff & 0xffffff00);
        pvVar5 = _malloc(uVar6);
        puVar4 = local_40;
        puVar7[9] = pvVar5;
        if ((void *)local_40[9] == (void *)0x0) {
          FUN_1008e3970("CHRSERVER","ChrDAStorage",0,
                        "Failed to alocate memory for window caption (%d bytes)",uVar6);
          *(undefined4 *)(puVar4 + 8) = 0;
        }
        else {
          _memcpy((void *)local_40[9],param_2 + (ulong)*(uint *)((long)param_2 + 0x14) * 2 + 6,
                  (ulong)uVar1 * 2);
          *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_2 + 3);
        }
      }
      uVar8 = 0;
      if (param_3 != (undefined8 *)0x0) {
        puVar4[0xe] = param_3[3];
        puVar4[0xd] = param_3[2];
        uVar2 = *param_3;
        puVar4[0xc] = param_3[1];
        puVar4[0xb] = uVar2;
        if ((*(byte *)(puVar4 + 0xc) & 8) == 0) {
          puVar4[0xe] = 0;
          puVar4[0xd] = 0;
          puVar4[0xc] = 0;
          puVar4[0xb] = 0;
        }
        else {
          puVar4[10] = param_6;
          uVar8 = 0xffffffff;
        }
      }
      puVar4 = local_40;
      if ((param_4 != (void *)0x0) && (param_5 != 0)) {
        sVar9 = (size_t)param_5;
        pvVar5 = _malloc(sVar9);
        puVar4 = local_40;
        local_40[0x10] = pvVar5;
        if (pvVar5 == (void *)0x0) {
          *(undefined4 *)(local_40 + 0xf) = 0;
        }
        else {
          *(int *)(local_40 + 0xf) = (int)(sVar9 >> 1);
          _memcpy(pvVar5,param_4,sVar9);
        }
      }
      *(undefined4 *)(puVar4 + 0x12) = 0;
      iVar3 = *(int *)(param_1 + 0x848) + 1;
      *(int *)(param_1 + 0x848) = iVar3;
      *(int *)((long)puVar4 + 0x94) = iVar3;
      FUN_100529480(param_1 + 0x830,&local_40,local_38);
      FUN_100529630(param_1 + 0x838,&local_40);
      FUN_100529630(param_1 + 0x840,&local_40);
      *puVar4 = *param_7;
      *param_7 = local_40;
    }
  }
  return uVar8;
}

