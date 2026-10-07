
undefined8
FUN_100114e50(undefined8 param_1,long *param_2,ulong param_3,ulong *param_4,long *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  lVar4 = *param_2;
  lVar1 = *(long *)(lVar4 + 0x10);
  puVar5 = (ulong *)(lVar4 + lVar1);
  lVar6 = (long)*(int *)(lVar4 + 4);
  puVar7 = puVar5 + lVar6 * 4;
  if ((((lVar6 != 0) && (*puVar5 <= param_3)) &&
      (puVar3 = puVar5 + lVar6 * 4 + -4, param_3 <= *puVar3)) &&
     (puVar7 = puVar5, (ulong *)(lVar1 + 0x20 + lVar4) < puVar3)) {
    do {
      uVar2 = ((long)puVar3 - (long)puVar7 >> 5) - ((long)puVar3 - (long)puVar7 >> 0x3f) &
              0xffffffffffffffe;
      puVar5 = puVar7 + uVar2 * 2;
      if (param_3 < puVar7[uVar2 * 2]) {
        puVar3 = puVar7 + uVar2 * 2;
        puVar5 = puVar7;
      }
      puVar7 = puVar5;
    } while (puVar7 + 4 < puVar3);
  }
  *param_4 = param_3;
  *param_5 = 1;
  lVar4 = *param_2;
  if (puVar7 == (ulong *)((long)*(int *)(lVar4 + 4) * 0x20 + *(long *)(lVar4 + 0x10) + lVar4)) {
    FUN_1001149c0(param_1,lVar1,param_3);
  }
  else {
    std::string::operator=((string *)&local_48,(string *)(puVar7 + 1));
    uVar2 = *puVar7;
    *param_4 = uVar2;
    lVar4 = *param_2;
    puVar5 = (ulong *)((long)*(int *)(lVar4 + 4) * 0x20 + *(long *)(lVar4 + 0x10) + lVar4);
    lVar4 = 0x10000;
    if (puVar7 + 4 != puVar5) {
      lVar4 = puVar7[4] - uVar2;
    }
    *param_5 = lVar4;
    FUN_100114b80(param_1,puVar5,&local_48,param_3 - *param_4);
  }
  std::string::~string((string *)&local_48);
  return param_1;
}

