
undefined8 *
FUN_10068ffd0(long *param_1,undefined4 param_2,undefined8 *param_3,long *param_4,undefined8 *param_5
             )

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar3 = (undefined8 *)QHashData::allocateNode((int)*param_1);
  *puVar3 = *param_5;
  *(undefined4 *)(puVar3 + 1) = param_2;
  puVar3[2] = *param_3;
  piVar2 = (int *)*param_4;
  puVar3[3] = piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)(puVar3 + 3));
      lVar4 = puVar3[3];
      iVar1 = *(int *)(lVar4 + 8);
      if (iVar1 != *(int *)(lVar4 + 0xc)) {
        puVar5 = (undefined8 *)(*param_4 + 0x10 + (long)*(int *)(*param_4 + 8) * 8);
        puVar6 = (undefined8 *)(lVar4 + 0x10 + (long)iVar1 * 8);
        lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar5;
          *puVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  *param_5 = puVar3;
  *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + 1;
  return puVar3;
}

