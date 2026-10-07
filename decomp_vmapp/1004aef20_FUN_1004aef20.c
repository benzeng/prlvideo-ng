
undefined8 FUN_1004aef20(long param_1,long param_2,char param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  double dVar8;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  uVar6 = 0xf0000003;
  if ((0x17 < *(ushort *)(param_2 + 0x14)) && (lVar4 = FUN_1002a6010(param_2), lVar4 != 0)) {
    QMutex::lock();
    iVar1 = *(int *)(param_1 + 0x118);
    iVar2 = *(int *)(param_1 + 0x11c);
    dVar8 = (double)FUN_1004b7a50(*(undefined8 *)(param_1 + 0xf0));
    uVar7 = *(uint *)(param_1 + 0x88);
    QMutex::unlock();
    if ((uVar7 & 0xfffffffe) == 2) {
      local_38 = (int)((double)iVar1 + (double)*(int *)(lVar4 + 4) / dVar8);
      local_34 = (int)((double)iVar2 + (double)*(int *)(lVar4 + 8) / dVar8);
      iVar1 = *(int *)(lVar4 + 0xc);
      iVar2 = *(int *)(lVar4 + 0x10);
      local_40 = iVar1;
      local_3c = iVar2;
      if ((iVar2 < 1) || (iVar1 < 1)) {
        uVar6 = 0xf000001c;
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Empty image size requested");
        }
      }
      else if (*(short *)(param_2 + 0x16) == 0) {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Need extended buffer to store image");
        }
      }
      else {
        lVar5 = FUN_1002a6120(param_2,0,1);
        uVar7 = iVar1 * iVar2 * 4;
        if (*(uint *)(lVar5 + 8) < uVar7) {
          if (0 < DAT_1011b55f8) {
            lVar5 = FUN_1002a6120(param_2,0,1);
            FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Buffer too small (%d; need %d)",
                          *(undefined4 *)(lVar5 + 8),uVar7);
          }
          *(uint *)(lVar4 + 4) = uVar7;
          uVar6 = 0xf0000009;
        }
        else {
          uVar6 = FUN_1002a6120(param_2,0,1);
          cVar3 = FUN_1004ab3f0(&local_38,&local_40,uVar6);
          uVar6 = 0xf000001c;
          if (cVar3 != '\0') {
            uVar6 = 0;
          }
        }
      }
    }
    else {
      uVar6 = 0xf000001c;
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Unable to get image data: Coherence OFF");
      }
    }
  }
  if (param_3 != '\0') {
    FUN_1004c07d0(param_1 + 0x10,param_2,uVar6);
  }
  return uVar6;
}

