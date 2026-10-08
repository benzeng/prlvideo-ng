
void FUN_100a35c30(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  
  puVar2 = operator_new(0x1c);
  puVar2[1] = 0;
  *puVar2 = 0;
  *(undefined4 *)puVar2 = 0x20000;
  *(undefined4 *)((long)puVar2 + 4) = 0xb;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((long)puVar2 + 0xc) = 0x1c;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[2] = 0;
  lVar3 = FUN_100a49010();
  uVar4 = *(uint *)(puVar2 + 2);
  if (lVar3 != 0) {
    uVar4 = uVar4 | 2;
    *(uint *)(puVar2 + 2) = uVar4;
  }
  *(uint *)(puVar2 + 2) = uVar4 | 4;
  iVar1 = _PrlDevSIA_SendSIAData(*param_2,puVar2,0x1c);
  if ((iVar1 != 0) && (0 < DAT_10230ffd0)) {
    FUN_100df99c0("","SIAToolClient",1,"Can\'t send SIA command to vm. Err = 0x%x",iVar1);
  }
  operator_delete(puVar2);
  return;
}

