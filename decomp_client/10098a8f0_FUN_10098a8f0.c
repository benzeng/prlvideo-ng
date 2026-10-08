
void FUN_10098a8f0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 - param_3 != 0) {
    lVar7 = 0;
    do {
      puVar5 = operator_new(0x28);
      puVar1 = *(undefined1 **)(param_4 + lVar7);
      *puVar5 = *puVar1;
      *(undefined ***)(puVar5 + 8) = &PTR_FUN_10227dad8;
      *(undefined ***)(puVar5 + 0x10) = &PTR_FUN_10227db30;
      piVar2 = *(int **)(puVar1 + 0x18);
      *(int **)(puVar5 + 0x18) = piVar2;
      if (*piVar2 != -1) {
        if (*piVar2 == 0) {
          QListData::detach((int)(puVar5 + 0x18));
          lVar3 = *(long *)(puVar5 + 0x18);
          lVar8 = (long)*(int *)(lVar3 + 8);
          lVar4 = *(long *)(puVar1 + 0x18);
          if ((lVar4 + (long)*(int *)(lVar4 + 8) * 8 != lVar3 + lVar8 * 8) &&
             (lVar6 = *(int *)(lVar3 + 0xc) - lVar8, lVar6 != 0 && lVar8 <= *(int *)(lVar3 + 0xc)))
          {
            _memcpy((void *)(lVar3 + 0x10 + lVar8 * 8),
                    (void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),lVar6 * 8);
          }
        }
        else {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
      }
      *(undefined2 *)(puVar5 + 0x20) = *(undefined2 *)(puVar1 + 0x20);
      *(undefined1 **)(param_2 + lVar7) = puVar5;
      lVar7 = lVar7 + 8;
    } while ((param_2 - param_3) + lVar7 != 0);
  }
  return;
}

