
undefined8 *
FUN_100721f50(long *param_1,undefined4 param_2,undefined4 *param_3,long *param_4,undefined8 *param_5
             )

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  puVar4 = (undefined8 *)QHashData::allocateNode((int)*param_1);
  *puVar4 = *param_5;
  *(undefined4 *)(puVar4 + 1) = param_2;
  *(undefined4 *)((long)puVar4 + 0xc) = *param_3;
  piVar1 = (int *)*param_4;
  puVar4[2] = piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)(puVar4 + 2));
      lVar2 = puVar4[2];
      lVar5 = (long)*(int *)(lVar2 + 8);
      lVar3 = *param_4;
      if ((lVar3 + (long)*(int *)(lVar3 + 8) * 8 != lVar2 + lVar5 * 8) &&
         (lVar6 = *(int *)(lVar2 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar5 * 8),
                (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar6 * 8);
      }
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  *param_5 = puVar4;
  *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + 1;
  return puVar4;
}

