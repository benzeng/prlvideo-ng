
int FUN_100580200(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = FUN_1005802c0(*(undefined8 *)(param_1 + 0x11b0));
  if (-1 < iVar3) {
    iVar3 = (**(code **)(**(long **)(param_1 + 0x11b0) + 0x50))(*(long **)(param_1 + 0x11b0),0);
    if (-1 < iVar3) {
      plVar1 = *(long **)(param_1 + 0x11b0);
      pcVar2 = *(code **)(*plVar1 + 0x38);
      puVar4 = (uint *)*param_3;
      if ((1 < *puVar4) || (*(long *)(puVar4 + 4) != 0x18)) {
        QByteArray::reallocData(param_3,puVar4[1] + 1,puVar4[2] >> 0x1f);
        puVar4 = (uint *)*param_3;
      }
      iVar3 = (*pcVar2)(plVar1,(long)puVar4 + *(long *)(puVar4 + 4),0x400,&DAT_100b46ed0);
      if (-1 < iVar3) {
        plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x10);
        (**(code **)(*plVar1 + 200))(plVar1,param_3);
        iVar3 = 0;
      }
    }
  }
  QByteArray::fill((char)param_3,0x5a);
  return iVar3;
}

