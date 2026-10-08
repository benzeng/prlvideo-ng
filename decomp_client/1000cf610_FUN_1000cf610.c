
void FUN_1000cf610(long param_1,QString *param_2,QString *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  uint *puVar6;
  long lVar7;
  undefined8 local_38;
  
  QMutex::lock();
  local_38 = 0;
  puVar6 = *(uint **)(param_1 + 0x58);
  uVar2 = puVar6[3];
  uVar3 = puVar6[2];
  if (0 < (int)((long)(int)uVar2 - (long)(int)uVar3)) {
    puVar1 = (undefined8 *)(param_1 + 0x58);
    lVar7 = 0;
    while( true ) {
      if (1 < *puVar6) {
        FUN_1000e6e10(puVar1,puVar6[1]);
        puVar6 = (uint *)*puVar1;
      }
      lVar4 = *(long *)(puVar6 + ((int)puVar6[2] + lVar7) * 2 + 4);
      cVar5 = operator==((QString *)(lVar4 + 8),param_2);
      if (cVar5 != '\0') break;
      lVar7 = lVar7 + 1;
      if ((long)(int)uVar2 - (long)(int)uVar3 <= lVar7) goto LAB_1000cf6c9;
      puVar6 = (uint *)*puVar1;
    }
    if (lVar4 != 0) {
      local_38 = *(undefined8 *)(lVar4 + 0x30);
      QString::operator=((QString *)(lVar4 + 0x40),param_3);
    }
  }
LAB_1000cf6c9:
  if (((local_38._4_4_ != 0) || ((int)local_38 != 0)) &&
     ((local_38._4_4_ != *(int *)(param_1 + 0x214) || ((int)local_38 != *(int *)(param_1 + 0x210))))
     ) {
    FUN_1000cf750(&local_38,param_3);
  }
  QMutex::unlock();
  return;
}

