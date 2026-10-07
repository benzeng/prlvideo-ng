
undefined1 FUN_1000d6f20(long *param_1)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_b8;
  int local_b4;
  uint local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_78 [8];
  int local_70 [16];
  
  piVar1 = (int *)param_1[3];
  local_70[1] = 0xffffffff;
  local_70[2] = 0xffffffff;
  local_70[0] = -1;
  iVar7 = 0;
  (**(code **)(*param_1 + 0x88))(param_1,0);
  QIODevice::read((char *)param_1,(longlong)local_70);
  if (local_70[0] == 0x65526153) {
    iVar7 = 0x40;
    iVar6 = 1;
    do {
      uVar2 = FUN_1000d6260(param_1,iVar6,local_78);
      if (0 < (int)uVar2) {
        iVar7 = (iVar7 + 0x20 + uVar2) - (uVar2 & 0xf);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x14);
  }
  *(int *)(param_1 + 2) = iVar7;
  uVar4 = 0;
  (**(code **)(*param_1 + 0x88))(param_1,0);
  QIODevice::read((char *)param_1,(longlong)&local_b8);
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  iVar7 = (int)param_1[2];
  if ((iVar7 != 0) && (local_b8 == 0x65526153)) {
    *(int *)((long)param_1 + 0x24) = local_b4;
    *(uint *)(param_1 + 5) = local_b0;
    if ((local_b4 != 0x40001) || (0x3008d < local_b0)) {
      FUN_1008e3970("","vm",0,
                    "Incompatible version. Detected version= 0x%x.0x%x. Expected version= 0x%x.0x%x.  Header size=0x%x"
                    ,local_b4,local_b0,0x40001,0x3008d,iVar7);
      return 0;
    }
    uVar9 = 0x3008d;
    uVar8 = 0x40001;
    FUN_1008e3970("","vm",0,
                  "Detected version= 0x%x.0x%x. Current version= 0x%x.0x%x. Header size=0x%x",
                  0x40001,local_b0,0x40001,0x3008d,iVar7);
    if (0x30019 < local_b0) {
      FUN_1008e3970("","vm",0,"Saved with build %u.%u",local_a8,local_a4,uVar8,uVar9,iVar7);
    }
  }
  uVar3 = QFile::size();
  (**(code **)(*param_1 + 0x88))(param_1,(int)param_1[2]);
  if ((uVar3 == 0) || (uVar4 = uVar3 & 0xffffffff, (uint)uVar3 <= *(uint *)(param_1 + 2))) {
    uVar5 = 0;
    FUN_1008e3970("","vm",0,"File is empty %u.%u",uVar4);
  }
  else {
    uVar3 = uVar3 - *(uint *)(param_1 + 2);
    if (*(uint *)(param_1 + 4) < uVar3) {
      uVar5 = 0;
      FUN_1008e3970("","vm",0,"Invalid buffer sizes %u.%llu",(ulong)*(uint *)(param_1 + 4),uVar3);
    }
    else {
      uVar4 = QIODevice::read((char *)param_1,param_1[3]);
      if (uVar3 == uVar4) {
        if ((uint)piVar1[2] == uVar3) {
          iVar7 = FUN_1000d6d50(param_1);
          uVar5 = 1;
          if (((iVar7 != *piVar1) &&
              (FUN_1008e3970("","vm",0,"Stored checksum=0x%x. Calculated checksum=0x%x"),
              local_b0 != 0x30010)) && ((4 < local_b0 - 0x30013 || (*piVar1 != 0)))) {
            uVar5 = 0;
            FUN_1008e3970("","vm",0,"The saved state is corrupted.");
          }
        }
        else {
          uVar5 = 0;
          FUN_1008e3970("","vm",0,"Invalid file format %u %u",(ulong)(uint)piVar1[2],
                        uVar3 & 0xffffffff);
        }
      }
      else {
        uVar5 = 0;
        FUN_1008e3970("","vm",0,"Reading failed %u",uVar3 & 0xffffffff);
      }
    }
  }
  return uVar5;
}

