
undefined1 FUN_100751fd0(undefined8 param_1,int *param_2,int *param_3,uint param_4,uint *param_5)

{
  int iVar1;
  undefined8 in_RAX;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined1 uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  
  if ((param_4 & 3) == 0) {
    if (((*param_5 | param_4) & 3) == 0) {
      piVar4 = (int *)(((long)(int)param_4 & 0xfffffffffffffffcU) + (long)param_2);
      piVar5 = (int *)(((long)(int)*param_5 & 0xfffffffffffffffcU) + (long)param_3);
      piVar11 = param_2;
      piVar7 = param_3;
      while ((piVar9 = piVar11, piVar7 < piVar5 && (piVar9 + 2 <= piVar4))) {
        iVar3 = *piVar9;
        if (iVar3 < 1) {
          piVar11 = piVar9 + 1;
          if (iVar3 < 0) {
            do {
              if ((piVar5 == piVar7) || (piVar11 == piVar4)) goto LAB_1007520b2;
              piVar2 = piVar9 + 2;
              *piVar7 = *piVar11;
              piVar7 = piVar7 + 1;
              iVar3 = iVar3 + 1;
              piVar9 = piVar11;
              piVar11 = piVar2;
            } while (iVar3 != 0);
          }
        }
        else {
          iVar1 = piVar9[1];
          do {
            if (piVar5 == piVar7) goto LAB_1007520b2;
            *piVar7 = iVar1;
            piVar7 = piVar7 + 1;
            iVar3 = iVar3 + -1;
            piVar11 = piVar9 + 2;
          } while (iVar3 != 0);
        }
      }
      uVar10 = (int)piVar9 - (int)param_2 & 0xfffffffc;
      uVar6 = (int)piVar7 - (int)param_3;
      if (uVar10 == param_4) {
        *param_5 = uVar6 & 0xfffffffc;
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
        FUN_1008e3970("","Compression",0,
                      "CCompressionEngineRLE4::do_uncompress() only %d out of %d bytes uncompressed to %d"
                      ,uVar10,*param_5,
                      CONCAT44((int)((ulong)in_RAX >> 0x20),uVar6) & 0xfffffffffffffffc);
      }
    }
    else {
LAB_1007520b2:
      uVar8 = 0;
      FUN_1008e3970("","Compression",0,"CCompressionEngineRLE4::do_uncompress() failed");
    }
  }
  else {
    uVar8 = 0;
    FUN_1008e3970("","Compression",0,"CCompressionEngineRLE4::do_uncompress(%u) unaligned size",
                  param_4);
  }
  return uVar8;
}

