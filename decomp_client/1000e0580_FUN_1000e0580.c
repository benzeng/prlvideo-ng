
void FUN_1000e0580(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  ulong uVar6;
  
  if (((char)param_1[9] == '\0') || (cVar3 = (**(code **)(*param_1 + 0x88))(param_1), cVar3 == '\0')
     ) {
    return;
  }
  QMutex::lock();
  puVar5 = (uint *)param_1[0xb];
  uVar6 = 0;
  if ((int)puVar5[2] < (int)puVar5[3]) {
    plVar1 = param_1 + 0xb;
    do {
      if (1 < *puVar5) {
        FUN_1000e6e10(plVar1,puVar5[1]);
        puVar5 = (uint *)*plVar1;
      }
      lVar2 = *(long *)(puVar5 + ((long)(int)puVar5[2] + uVar6) * 2 + 4);
      iVar4 = QString::compare(param_2,lVar2 + 0x10,0);
      if (iVar4 == 0) {
        if (((*(int *)(lVar2 + 0x34) == 0) && (*(int *)(lVar2 + 0x30) == 0)) &&
           ((*(byte *)(lVar2 + 0x20) & 0x40) != 0)) {
          FUN_1000ddd20(param_1,uVar6 & 0xffffffff);
          if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(*plVar1 + 0xc) - *(int *)(*plVar1 + 8))) {
            FUN_1000e53a0(plVar1,uVar6 & 0xffffffff);
            FUN_1000df020(param_1);
            FUN_1000df110(param_1);
          }
        }
        break;
      }
      uVar6 = uVar6 + 1;
      puVar5 = (uint *)*plVar1;
    } while ((long)uVar6 < (long)(int)puVar5[3] - (long)(int)puVar5[2]);
  }
  QMutex::unlock();
  return;
}

