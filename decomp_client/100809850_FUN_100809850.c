
int FUN_100809850(void)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  uint uVar7;
  QArrayData *local_28;
  undefined1 local_19;
  
  iVar4 = DAT_102275378;
  if (DAT_102275378 == 0) {
    pcVar5 = (char *)QMetaObject::className();
    puVar1 = PTR_shared_null_1021e1288;
    local_28 = (QArrayData *)PTR_shared_null_1021e1288;
    sVar6 = _strlen(pcVar5);
    uVar3 = (int)sVar6 + 0xb;
    if (((uint)*(undefined8 *)puVar1 < 2) &&
       ((int)sVar6 + 0xcU <= (*(uint *)(puVar1 + 8) & 0x7fffffff))) {
      *(uint *)(puVar1 + 8) = *(uint *)(puVar1 + 8) | 0x80000000;
    }
    else {
      uVar7 = (uint)((ulong)*(undefined8 *)puVar1 >> 0x20);
      if (uVar7 < uVar3) {
        uVar7 = uVar3;
      }
      QByteArray::reallocData(&local_28,uVar7 + 1,1);
    }
    cVar2 = QByteArray::append((char *)&local_28,0x1dd8ae3);
    pcVar5 = (char *)QByteArray::append(cVar2);
    cVar2 = QByteArray::append(pcVar5);
    QByteArray::append(cVar2);
    iVar4 = QMetaType::registerNormalizedType(&local_28,FUN_100087050,FUN_100087090,0x10,0x187,0);
    if (0 < iVar4) {
      FUN_1000870d0(iVar4);
    }
    DAT_102275378 = iVar4;
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return iVar4;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
  return iVar4;
}

