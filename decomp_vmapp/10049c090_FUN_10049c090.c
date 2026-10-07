
void FUN_10049c090(long *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = (uint *)PTR_shared_null_100ba20d0;
  if (param_3 != 0) {
    puVar1 = (uint *)*param_1;
    if ((*puVar1 < 2) && ((puVar1[2] & 0x7fffffff) == param_3)) {
      uVar2 = puVar1[1];
      lVar6 = (long)(int)uVar2;
      if ((int)uVar2 < (int)param_2) {
        if (uVar2 != param_2) {
          ___bzero(*(long *)(puVar1 + 4) + lVar6 * 0x40 + (long)puVar1,
                   (long)(int)param_2 * 0x40 + lVar6 * -0x40);
        }
      }
      else if (uVar2 != param_2) {
        lVar7 = (long)(int)param_2 * 0x40;
        lVar4 = *(long *)(puVar1 + 4) + (long)puVar1;
        lVar6 = lVar6 << 6;
        do {
          std::string::~string((string *)(lVar4 + 0x28 + lVar7));
          std::string::~string((string *)(lVar4 + 8 + lVar7));
          lVar4 = lVar4 + 0x40;
          lVar6 = lVar6 + -0x40;
        } while (lVar7 != lVar6);
      }
      puVar1[1] = param_2;
    }
    else {
      puVar1 = (uint *)QArrayData::allocate(0x40,8,(long)(int)param_3);
      if (puVar1 == (uint *)0x0) {
        qBadAlloc();
      }
      puVar1[1] = param_2;
      lVar6 = *param_1;
      uVar2 = ~param_2;
      if ((int)~param_2 <= (int)~*(uint *)(lVar6 + 4)) {
        uVar2 = ~*(uint *)(lVar6 + 4);
      }
      lVar4 = *(long *)(puVar1 + 4);
      puVar3 = (undefined4 *)(*(long *)(lVar6 + 0x10) + lVar6);
      for (lVar7 = 0; (long)(int)~uVar2 << 6 != lVar7; lVar7 = lVar7 + 0x40) {
        *(undefined4 *)((long)puVar1 + lVar7 + lVar4) = *puVar3;
        std::string::string((string *)((long)puVar1 + lVar7 + lVar4 + 8),(string *)(puVar3 + 2));
        *(undefined1 *)((long)puVar1 + lVar7 + lVar4 + 0x20) = *(undefined1 *)(puVar3 + 8);
        std::string::string((string *)((long)puVar1 + lVar7 + lVar4 + 0x28),(string *)(puVar3 + 10))
        ;
        puVar3 = puVar3 + 0x10;
      }
      lVar6 = *param_1;
      if (*(int *)(lVar6 + 4) < (int)param_2) {
        lVar4 = (long)puVar1 + lVar7 + lVar4;
        if (lVar4 != (long)puVar1 + (long)(int)puVar1[1] * 0x40 + *(long *)(puVar1 + 4)) {
          ___bzero(lVar4,(long)puVar1 +
                         (*(long *)(puVar1 + 4) - lVar4) + (long)(int)puVar1[1] * 0x40 &
                         0xffffffffffffffc0);
          lVar6 = *param_1;
        }
      }
      puVar1[2] = puVar1[2] & 0x7fffffff | *(uint *)(lVar6 + 8) & 0x80000000;
    }
  }
  puVar5 = (uint *)*param_1;
  if (puVar5 == puVar1) {
    return;
  }
  if (*puVar5 != 0xffffffff) {
    if (*puVar5 != 0) {
      LOCK();
      *puVar5 = *puVar5 - 1;
      UNLOCK();
      if (*puVar5 != 0) goto LAB_10049c2bc;
      puVar5 = (uint *)*param_1;
    }
    FUN_10049c330(param_1,puVar5);
  }
LAB_10049c2bc:
  *param_1 = (long)puVar1;
  return;
}

