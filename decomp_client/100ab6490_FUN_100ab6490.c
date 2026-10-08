
bool FUN_100ab6490(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2 == 0) {
    puVar2 = *(uint **)(param_1 + 8);
    if ((1 < *puVar2) || (*(long *)(puVar2 + 4) != 0x18)) {
      QByteArray::reallocData((undefined8 *)(param_1 + 8),puVar2[1] + 1,puVar2[2] >> 0x1f);
      puVar2 = *(uint **)(param_1 + 8);
    }
    uVar1 = puVar2[1];
    *param_3 = (long)puVar2 + *(long *)(puVar2 + 4);
    *(uint *)(param_3 + 1) = uVar1;
  }
  return param_2 == 0;
}

