
undefined8 FUN_1000456b0(long param_1,undefined8 param_2,int *param_3,uint param_4)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  undefined4 *puVar7;
  Data *pDVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  QMutex::lock();
  lVar4 = *(long *)(param_1 + 0x160);
  _free(*(void **)(param_1 + 0x168));
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  puVar5 = *(uint **)(param_1 + 0x150);
  uVar3 = puVar5[2];
  if (puVar5[3] == uVar3) {
    if ((*(byte *)(param_3 + 3) & 0x40) != 0) {
      *(undefined8 *)(param_1 + 0x160) = param_2;
      *(int **)(param_1 + 0x168) = param_3;
      *(uint *)(param_1 + 0x170) = param_4;
      uVar11 = 0xffffffff;
      goto LAB_1000458c5;
    }
    param_3[4] = 0;
    param_3[2] = -1;
  }
  else {
    plVar2 = (long *)(param_1 + 0x150);
    if (1 < *puVar5) {
      pDVar8 = (Data *)QListData::detach((int)plVar2);
      lVar6 = *plVar2;
      lVar9 = (long)*(int *)(lVar6 + 8);
      if ((puVar5 + (long)(int)uVar3 * 2 != (uint *)(lVar6 + lVar9 * 8)) &&
         (lVar10 = *(int *)(lVar6 + 0xc) - lVar9, lVar10 != 0 && lVar9 <= *(int *)(lVar6 + 0xc))) {
        _memcpy((void *)(lVar6 + 0x10 + lVar9 * 8),puVar5 + (long)(int)uVar3 * 2 + 4,lVar10 * 8);
      }
      if (*(int *)pDVar8 != -1) {
        if (*(int *)pDVar8 != 0) {
          LOCK();
          *(int *)pDVar8 = *(int *)pDVar8 + -1;
          UNLOCK();
          if (*(int *)pDVar8 != 0) goto LAB_1000457be;
        }
        QListData::dispose(pDVar8);
      }
    }
LAB_1000457be:
    puVar7 = *(undefined4 **)(*plVar2 + 0x10 + (long)*(int *)(*plVar2 + 8) * 8);
    uVar1 = (ulong)(uint)puVar7[4] + 0x14;
    if (param_4 < uVar1) {
      if ((((param_3[3] & 8U) == 0) || (param_4 < 0x18)) || ((puVar7[3] & 8) != 0)) {
        uVar11 = 0xf0000009;
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("SGAH","vm",1,
                        "Pending command %i has %u bytes of data, but supplied buffer from guest is only %u bytes (flags=0x%x)"
                        ,*puVar7,(ulong)(uint)puVar7[4],param_4,param_3[3]);
        }
LAB_1000458b5:
        FUN_100046680(plVar2);
        _free(puVar7);
        goto LAB_1000458c5;
      }
      param_3[1] = 2;
      *param_3 = 0x7e;
      param_3[2] = 0;
      param_3[3] = 8;
      param_3[4] = 4;
      param_3[5] = puVar7[4] + 0x14;
    }
    else {
      _memcpy(param_3,puVar7,uVar1);
      uVar11 = 0;
      if (*param_3 != 0x7e) goto LAB_1000458b5;
    }
    *(byte *)(puVar7 + 3) = *(byte *)(puVar7 + 3) | 8;
  }
  uVar11 = 0;
LAB_1000458c5:
  QMutex::unlock();
  if (lVar4 != 0) {
    FUN_1004c07d0(param_1 + 0x10,lVar4,0xf0000024);
  }
  return uVar11;
}

