
undefined8 *
FUN_10078f4f0(undefined8 *param_1,undefined4 param_2,uint param_3,long *param_4,char param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  size_t sVar10;
  
  sVar10 = 0x90;
  if (1 < param_3) {
    sVar10 = (ulong)param_3 * 0x10 + 0x80;
  }
  puVar3 = _malloc(sVar10);
  *(undefined2 *)(puVar3 + 10) = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[0x10] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xb] = 0;
  *(undefined4 *)(puVar3 + 8) = param_2;
  *(uint *)((long)puVar3 + 0x4c) = param_3;
  uVar8 = 1;
  if (1 < param_3) {
    uVar8 = param_3;
  }
  uVar5 = 1;
  if (1 < param_3) {
    uVar5 = (ulong)param_3;
  }
  if (uVar8 != 0) {
    uVar8 = 1;
    if (1 < param_3) {
      uVar8 = param_3;
    }
    uVar9 = 0;
    do {
      *(undefined4 *)(puVar3 + uVar5 + uVar9 + 0x10) = 0;
      *(undefined4 *)((long)puVar3 + uVar9 * 8 + uVar5 * 8 + 0x84) = 0;
      if (uVar9 != 0) {
        puVar3[uVar9 + 0x10] = 0;
      }
      uVar9 = uVar9 + 1;
    } while (uVar8 != uVar9);
  }
  plVar4 = (long *)FUN_100792890(puVar3,FUN_100790ef0,1);
  if ((plVar4 == (long *)0x0) || (lVar1 = plVar4[2], lVar1 == 0)) {
    FUN_1008e3970("","IOCommunication",0,"Can\'t allocate memory!");
    *param_1 = 0;
    if (plVar4 == (long *)0x0) {
      return param_1;
    }
  }
  else {
    if ((*param_4 != 0) && (puVar3 = *(undefined8 **)(*param_4 + 0x10), puVar3 != (undefined8 *)0x0)
       ) {
      uVar2 = *puVar3;
      *(undefined8 *)(lVar1 + 0x18) = puVar3[1];
      *(undefined8 *)(lVar1 + 0x10) = uVar2;
      if (param_5 == '\0') {
        lVar6 = 0;
        if (*param_4 != 0) {
          lVar6 = *(long *)(*param_4 + 0x10);
        }
        uVar2 = *(undefined8 *)(lVar6 + 0x20);
        *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar6 + 0x28);
        *(undefined8 *)(lVar1 + 0x30) = uVar2;
      }
    }
    *param_1 = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar7 = plVar4 + 1;
  LOCK();
  lVar1 = *plVar7;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)lVar1 == 1) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}

