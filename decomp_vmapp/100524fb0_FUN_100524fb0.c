
void FUN_100524fb0(long param_1,undefined4 param_2,void *param_3,uint param_4)

{
  char cVar1;
  long lVar2;
  char cVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 local_48 [2];
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  lVar2 = *(long *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (lVar2 == 0) {
    local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
    local_48[0] = param_2;
    QByteArray::resize((int)&local_40);
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f)
      ;
    }
    _memcpy(local_40 + *(long *)(local_40 + 0x10),param_3,(ulong)param_4);
    cVar3 = FUN_100525d60(*(undefined8 *)(param_1 + 0xa8),local_48);
    cVar1 = *(char *)(param_1 + 0xb0);
    *(char *)(param_1 + 0xb0) = cVar3;
    QMutex::unlock();
    if ((cVar3 == '\0' && cVar1 != '\0') && (0 < DAT_1011b55f8)) {
      FUN_1008e3970("","ShellIntHost",1,"Shell integration: failed to enqueue wsm_%u event",
                    local_48[0]);
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
  else {
    QMutex::unlock();
    puVar4 = (undefined4 *)FUN_1002a6010(lVar2);
    *puVar4 = param_2;
    if ((((param_3 != (void *)0x0) && (param_4 != 0)) && (*(short *)(lVar2 + 0x16) != 0)) &&
       ((lVar5 = FUN_1002a6120(lVar2,0,1), lVar5 != 0 && (param_4 <= *(uint *)(lVar5 + 8))))) {
      FUN_1002a5a50(lVar5,0,param_3,param_4);
      *(uint *)(lVar5 + 0x10) = param_4;
    }
    FUN_1004c07d0(param_1,lVar2,0);
  }
  return;
}

