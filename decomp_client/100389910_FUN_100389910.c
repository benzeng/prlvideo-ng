
int FUN_100389910(void)

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
  
  iVar4 = DAT_102273be8;
  if (DAT_102273be8 == 0) {
    pcVar5 = (char *)QMetaObject::className();
    puVar1 = PTR_shared_null_1021e1288;
    local_28 = (QArrayData *)PTR_shared_null_1021e1288;
    sVar6 = _strlen(pcVar5);
    if (((uint)*(undefined8 *)puVar1 < 2) &&
       ((int)sVar6 + 2U <= (*(uint *)(puVar1 + 8) & 0x7fffffff))) {
      *(uint *)(puVar1 + 8) = *(uint *)(puVar1 + 8) | 0x80000000;
    }
    else {
      uVar3 = (int)sVar6 + 1;
      uVar7 = (uint)((ulong)*(undefined8 *)puVar1 >> 0x20);
      if (uVar3 <= uVar7) {
        uVar3 = uVar7;
      }
      QByteArray::reallocData(&local_28,uVar3 + 1,1);
    }
    cVar2 = QByteArray::append((char *)&local_28);
    QByteArray::append(cVar2);
    iVar4 = QMetaType::registerNormalizedType
                      (&local_28,FUN_100389a60,FUN_100389a70,8,0x10c,&DAT_1021f15f0);
    DAT_102273be8 = iVar4;
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

