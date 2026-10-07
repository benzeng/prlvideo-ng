
undefined8 *
FUN_1004b87b0(undefined8 param_1,undefined8 *param_2,long *param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  size_t sVar7;
  uint uVar8;
  
  puVar2 = _malloc(0x80);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
    FUN_1008e3970("CHRSERVER","ChrToolSrv",0,"Failed to allocate memory (%ld bytes)",0x80);
  }
  else {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[0xc] = param_2[5];
    puVar2[0xb] = param_2[4];
    puVar2[10] = param_2[3];
    puVar2[9] = param_2[2];
    uVar1 = *param_2;
    puVar2[8] = param_2[1];
    puVar2[7] = uVar1;
    if ((ulong)*(uint *)((long)param_2 + 0x14) != 0) {
      sVar7 = (ulong)*(uint *)((long)param_2 + 0x14) << 4;
      pvVar3 = _malloc((ulong)((int)sVar7 + 0xffU & 0xffffff00));
      puVar2[0xd] = pvVar3;
      _memcpy(pvVar3,param_2 + 6,sVar7);
    }
    if ((param_3 != (long *)0x0) && (lVar5 = *param_3, lVar5 != 0)) {
      lVar4 = FUN_1002a6120(lVar5,1,0);
      if (lVar4 != 0) {
        lVar4 = FUN_1002a6120(lVar5,1,0);
        if (0x1f < *(uint *)(lVar4 + 8)) {
          lVar5 = FUN_1002a6120(lVar5,1,0);
          if ((*(byte *)(param_3 + 2) & 8) != 0) {
            uVar8 = *(int *)(lVar5 + 8) + 0x3ffU & 0xfffffc00;
            plVar6 = _malloc((ulong)uVar8);
            puVar2[0xe] = plVar6;
            if (plVar6 == (long *)0x0) {
              FUN_1008e3970("CHRSERVER","ChrToolSrv",0,
                            "Failed to allocate memory for window bitmap (%d bytes)",(ulong)uVar8);
              puVar2[0xe] = 0;
            }
            else {
              FUN_1002a5990(lVar5,0,plVar6,*(undefined4 *)(lVar5 + 8));
              plVar6[3] = param_3[4];
              plVar6[2] = param_3[3];
              lVar5 = param_3[1];
              plVar6[1] = param_3[2];
              *plVar6 = lVar5;
              *(uint *)(puVar2 + 0xf) = uVar8;
              *(undefined1 *)((long)puVar2 + 0x7c) = 1;
              FUN_1004be520(plVar6);
            }
          }
        }
      }
    }
    *(undefined4 *)(puVar2 + 5) = 1;
    *(undefined4 *)((long)puVar2 + 0x2c) = param_5;
    *(undefined4 *)(puVar2 + 6) = param_4;
    *(undefined1 *)((long)puVar2 + 0x34) = 1;
  }
  return puVar2;
}

