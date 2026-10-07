
void FUN_100286ec0(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_100bb0730;
  param_1[1] = &PTR_metaObject_100bb0818;
  param_1[0xd] = &PTR_FUN_100bb0890;
  QMutex::lock();
  uVar7 = (ulong)*(uint *)(param_1 + 0x12);
  if ((undefined8 *)(&DAT_1011b89e0)[uVar7] != param_1) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "s_devices[m_target] == this","../Scsi/Lsi/dev.cpp",0x209,"~CLsiDev");
    uVar7 = (ulong)*(uint *)(param_1 + 0x12);
  }
  (&DAT_1011b89e0)[uVar7] = 0;
  lVar2 = param_1[0x13];
  uVar4 = *(ulong *)(lVar2 + 0x10a8);
  do {
    puVar1 = (ulong *)(lVar2 + 0x10a8);
    LOCK();
    uVar5 = *puVar1;
    bVar8 = uVar4 == uVar5;
    if (bVar8) {
      *puVar1 = ~(1L << ((byte)uVar7 & 0x3f)) & uVar4;
      uVar5 = uVar4;
    }
    UNLOCK();
    uVar4 = uVar5;
  } while (!bVar8);
  puVar6 = param_1 + 0x31;
  uVar7 = 0;
  do {
    pvVar3 = (void *)*puVar6;
    if (pvVar3 != (void *)0x0) {
      FUN_10008d470((long)pvVar3 + 200);
      operator_delete(pvVar3);
    }
    *puVar6 = 0;
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 0x1d;
  } while (uVar7 < 0x400);
  if (param_1[0x14] != 0) {
    FUN_1000a5b20(DAT_1011c3698,0xae,*(undefined4 *)(param_1 + 0x12));
  }
  QMutex::unlock();
  FUN_10025b110(param_1 + 0xd);
  FUN_100257ad0(param_1);
  return;
}

