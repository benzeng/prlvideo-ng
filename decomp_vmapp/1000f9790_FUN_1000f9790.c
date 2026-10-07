
undefined8 FUN_1000f9790(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  long *local_30;
  
  if (*(short *)(param_2 + 0x14) != 0x18) {
    FUN_1008e3970("","vm",0,"hdd: SF ERROR: wrong SFLT_CONNECT_DISK request size %d (must be %ld)",
                  *(short *)(param_2 + 0x14),0x18);
    return 0xf0000003;
  }
  puVar5 = (undefined8 *)FUN_1002a6010(param_2);
  if (((*(byte *)((long)puVar5 + 0x11) & 1) != 0) &&
     (iVar1 = *(int *)((long)puVar5 + 0x14), iVar1 != -1)) {
    FUN_100259060(&local_30,*(undefined1 *)(puVar5 + 2),iVar1);
    if ((*(long *)(local_30[2] + 8) == 0) ||
       (plVar6 = (long *)___dynamic_cast(*(long *)(local_30[2] + 8),&PTR_vtable_100baea70,
                                         &PTR_vtable_100bef130,0xfffffffffffffffe),
       plVar6 == (long *)0x0)) {
      if ((ulong)*(byte *)(puVar5 + 2) < 3) {
        pcVar7 = (&PTR_s_ide_100ba9140)[*(byte *)(puVar5 + 2)];
      }
      else {
        pcVar7 = "unknown";
      }
      uVar9 = 0xf0000012;
      FUN_1008e3970("","vm",0,"hdd: SF ERROR: device [%s%u] not found",pcVar7,iVar1);
    }
    else {
      cVar3 = (**(code **)(*plVar6 + 0x30))(plVar6);
      if (cVar3 == '\0') {
        iVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,*puVar5,puVar5[1]);
        if (iVar4 == 0) {
          pcVar7 = "";
          if ((*(byte *)((long)puVar5 + 0x11) & 1) != 0) {
            pcVar7 = "(identified) ";
          }
          if ((ulong)*(byte *)(puVar5 + 2) < 3) {
            pcVar8 = (&PTR_s_ide_100ba9140)[*(byte *)(puVar5 + 2)];
          }
          else {
            pcVar8 = "unknown";
          }
          uVar9 = 0;
          FUN_1008e3970("","vm",0,"hdd: SF: connected %s[%s%u] ver. %d",pcVar7,pcVar8,iVar1,
                        *(undefined2 *)(param_1 + 0x20));
          if (DAT_1011ccc18 != (code *)0x0) {
            (*DAT_1011ccc18)(iVar1,0x13,4);
          }
        }
        else {
          if ((ulong)*(byte *)(puVar5 + 2) < 3) {
            pcVar7 = (&PTR_s_ide_100ba9140)[*(byte *)(puVar5 + 2)];
          }
          else {
            pcVar7 = "unknown";
          }
          uVar9 = 0xf0000012;
          FUN_1008e3970("","vm",0,"hdd: SF ERROR: can\'t connect sfilter to [%s%u]",pcVar7,iVar1);
        }
      }
      else {
        uVar9 = 0xf0000002;
        if (2 < DAT_1011b55f8) {
          if ((ulong)*(byte *)(puVar5 + 2) < 3) {
            pcVar7 = (&PTR_s_ide_100ba9140)[*(byte *)(puVar5 + 2)];
          }
          else {
            pcVar7 = "unknown";
          }
          FUN_1008e3970("","vm",3,"hdd: SF ERROR: invalid request, [%s%u] is already connected!",
                        pcVar7,iVar1);
        }
      }
    }
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    return uVar9;
  }
  FUN_1008e3970("","vm",0,"hdd: SF ERROR: SFLT_CONNECT_DISK request for invalid device");
  return 0xf0000012;
}

