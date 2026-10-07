
void FUN_10003fcc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  string *psVar1;
  char cVar2;
  size_t sVar3;
  QArrayData *pQVar4;
  string *psVar5;
  char *pcVar6;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  char *local_88;
  long local_78;
  QArrayData *local_70;
  string local_68 [24];
  string *local_50;
  string *local_48;
  undefined1 local_31;
  
  QString::toUtf8();
  pQVar4 = local_70 + *(long *)(local_70 + 0x10);
  _strlen((char *)pQVar4);
  std::string::__init((char *)local_68,(ulong)pQVar4);
  FUN_100499f70(&local_50,local_68);
  std::string::~string(local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003fd49;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10003fd49:
  psVar1 = local_48;
  if (local_50 != local_48) {
    psVar5 = local_50;
    do {
      FUN_10049d2b0(&local_78,psVar5);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (char *)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = (char *)0x0;
      if (((local_78 != 0) && (cVar2 = FUN_10049cca0(local_78,(string *)&local_98), cVar2 != '\0'))
         && (cVar2 = FUN_10049d120(local_78,&local_b8), cVar2 != '\0')) {
        pcVar6 = local_a8;
        if ((local_b8 & 1) == 0) {
          pcVar6 = (char *)((long)&local_b8 + 1);
        }
        sVar3 = _strlen(pcVar6);
        FUN_100040e10(param_3,3,pcVar6,(int)sVar3 + 1);
        pcVar6 = local_88;
        if ((local_98 & 1) == 0) {
          pcVar6 = (char *)((long)&local_98 + 1);
        }
        sVar3 = _strlen(pcVar6);
        FUN_100040e10(param_3,3,pcVar6,(int)sVar3 + 1);
      }
      std::string::~string((string *)&local_b8);
      std::string::~string((string *)&local_98);
      if (local_78 != 0) {
        _CFRelease();
      }
      psVar5 = psVar5 + 0x18;
    } while (psVar1 != psVar5);
  }
  psVar1 = local_50;
  if (local_50 != (string *)0x0) {
    while (local_48 != psVar1) {
      local_48 = local_48 + -0x18;
      std::string::~string(local_48);
    }
    operator_delete(local_50);
  }
  return;
}

