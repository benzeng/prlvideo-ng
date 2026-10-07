
int FUN_10060e740(long *param_1,long *param_2,undefined8 *param_3,QByteArray *param_4,
                 QByteArray *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  iVar2 = (**(code **)(*param_1 + 0xb8))(param_1,param_6,param_7);
  if (iVar2 < 0) {
    pcVar3 = "Error initializing base class 0x%x";
  }
  else {
    lVar5 = *param_2;
    iVar2 = *(int *)(lVar5 + 8);
    if (*(int *)(lVar5 + 0xc) == iVar2) {
      FUN_1008e3970("","crypt",0,"Empty set of files sent to FilesEncryption");
      iVar2 = -0x7ffffffd;
    }
    else {
      lVar4 = lVar5 + 0x10 + (long)iVar2 * 8;
      lVar5 = lVar5 + 0x18 + (long)iVar2 * 8;
      do {
        iVar2 = (**(code **)(*param_1 + 0xb0))(param_1,lVar4);
        if (iVar2 < 0) break;
        bVar6 = lVar5 != *param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8;
        lVar4 = lVar5;
        lVar5 = lVar5 + 8;
      } while (bVar6);
      if (-1 < iVar2) {
        QByteArray::operator=((QByteArray *)(param_1 + 0xd),param_4);
        QByteArray::operator=((QByteArray *)(param_1 + 0xe),param_5);
        uVar1 = *param_3;
        *(undefined8 *)((long)param_1 + 0x59) = param_3[1];
        *(undefined8 *)((long)param_1 + 0x51) = uVar1;
        iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
        if (-1 < iVar2) {
          (**(code **)(*param_1 + 0xc0))(param_1,0x3ed);
          return 0;
        }
        FUN_1008e3970("","crypt",0,"Execution failed 0x%x",iVar2);
        (**(code **)(*param_1 + 0xc0))(param_1,iVar2);
        return iVar2;
      }
      FUN_1008e3970("","crypt",0,"Error adding entry 0x%x",iVar2);
    }
    pcVar3 = "Can\'t form files list 0x%x";
  }
  FUN_1008e3970("","crypt",0,pcVar3,iVar2);
  return iVar2;
}

