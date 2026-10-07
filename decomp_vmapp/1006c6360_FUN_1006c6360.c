
undefined1 FUN_1006c6360(uint param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  undefined1 uVar4;
  QArrayData *local_48;
  undefined8 ***local_40;
  undefined8 ***local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  local_30 = 0;
  local_40 = &local_40;
  local_38 = &local_40;
  cVar1 = FUN_1006c1580(&local_40,0,0);
  ppppuVar3 = (undefined8 ****)local_38;
  if (cVar1 == '\0') {
    FUN_1006c21a0();
    uVar2 = FUN_1006c2980();
    uVar4 = 0;
    FUN_1008e3970("","prl_net",0,"[PrlNet]  makeEthIfacesList returned error: %ld",uVar2);
  }
  else {
    for (; ppppuVar3 != &local_40; ppppuVar3 = (undefined8 ****)ppppuVar3[1]) {
      if (((*(uint *)(ppppuVar3 + 5) & 0x90000000) == 0x10000000) &&
         ((*(uint *)(ppppuVar3 + 5) & 0xfffffff) == param_1)) {
        QString::toUtf8();
        _strncpy(param_2,(char *)(local_48 + *(long *)(local_48 + 0x10)),0x10);
        uVar4 = 1;
        if (*(int *)local_48 == -1) goto LAB_1006c647b;
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_21 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1006c647b;
        }
        QArrayData::deallocate(local_48,1,8);
        goto LAB_1006c647b;
      }
    }
    uVar4 = 0;
  }
LAB_1006c647b:
  FUN_1006c1f60(&local_40);
  return uVar4;
}

