
void FUN_100b583e0(undefined8 *param_1,QTextStream *param_2)

{
  QTextStream *pQVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = (uint *)*param_1;
  uVar3 = (ulong)puVar2[1];
  if (0 < (int)puVar2[1]) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      if (1 < *puVar2) {
        if ((puVar2[2] & 0x7fffffff) == 0) {
          puVar2 = (uint *)QArrayData::allocate(0x10,8,0,2);
          *param_1 = puVar2;
        }
        else {
          FUN_100b588e0(param_1,uVar3 & 0xffffffff,puVar2[2] & 0x7fffffff,0);
          puVar2 = (uint *)*param_1;
        }
      }
      pQVar1 = (QTextStream *)
               QTextStream::operator<<
                         (param_2,(QString *)((long)puVar2 + lVar4 + *(long *)(puVar2 + 4)));
      pQVar1 = (QTextStream *)QTextStream::operator<<(pQVar1," = ");
      puVar2 = (uint *)*param_1;
      if (1 < *puVar2) {
        if ((puVar2[2] & 0x7fffffff) == 0) {
          puVar2 = (uint *)QArrayData::allocate(0x10,8,0,2);
          *param_1 = puVar2;
        }
        else {
          FUN_100b588e0(param_1,puVar2[1],puVar2[2] & 0x7fffffff,0);
          puVar2 = (uint *)*param_1;
        }
      }
      pQVar1 = (QTextStream *)
               QTextStream::operator<<
                         (pQVar1,(QString *)((long)puVar2 + lVar4 + 8 + *(long *)(puVar2 + 4)));
      endl(pQVar1);
      lVar5 = lVar5 + 1;
      puVar2 = (uint *)*param_1;
      uVar3 = (ulong)(int)puVar2[1];
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < (long)uVar3);
  }
  return;
}

