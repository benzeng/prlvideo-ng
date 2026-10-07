
undefined1 FUN_1000d6640(QString *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_70 [8];
  int local_68 [16];
  
  (**(code **)(param_1->field0_0x0 + 0x70))();
  *(undefined4 *)&param_1[2].field0_0x0 = 0;
  QFile::setFileName(param_1);
  cVar1 = QFile::exists();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    iVar4 = 1;
    cVar1 = QFile::open(param_1,1);
    uVar2 = 0;
    iVar5 = 0;
    if (cVar1 != '\0') {
      local_68[1] = 0xffffffff;
      local_68[2] = 0xffffffff;
      local_68[0] = -1;
      (**(code **)(param_1->field0_0x0 + 0x88))(param_1,0);
      QIODevice::read((char *)param_1,(longlong)local_68);
      if (local_68[0] == 0x65526153) {
        iVar5 = 0x40;
        do {
          uVar3 = FUN_1000d6260(param_1,iVar4,local_70);
          if (0 < (int)uVar3) {
            iVar5 = (iVar5 + 0x20 + uVar3) - (uVar3 & 0xf);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0x14);
      }
      *(int *)&param_1[2].field0_0x0 = iVar5;
      uVar2 = FUN_1000d6740(param_1,0x1000000);
    }
  }
  return uVar2;
}

