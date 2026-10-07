
void FUN_10005c2f0(undefined8 param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  
  puVar1 = (uint *)*param_2;
  uVar3 = puVar1[1];
  if (0 < (int)uVar3) {
    lVar2 = 0;
    do {
      if ((lVar2 < (int)puVar1[1]) &&
         (*(short *)((long)puVar1 + lVar2 * 2 + *(long *)(puVar1 + 4)) == 0x3a)) {
        if (lVar2 < (int)uVar3) {
          if ((1 < *puVar1) || (*(long *)(puVar1 + 4) != 0x18)) {
            QString::reallocData((uint)param_2,(bool)((char)uVar3 + '\x01'));
          }
        }
        else {
          QString::expand((uint)param_2);
        }
        *(undefined2 *)(*param_2 + *(long *)(*param_2 + 0x10) + lVar2 * 2) = 0x20;
        puVar1 = (uint *)*param_2;
        uVar3 = puVar1[1];
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)uVar3);
  }
  return;
}

