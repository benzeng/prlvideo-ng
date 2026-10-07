
undefined4 FUN_1004a1f30(long param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  byte bVar10;
  ulong uVar11;
  undefined4 local_54;
  int local_38;
  int local_34;
  
  piVar5 = *(int **)PTR_PTR_10111c948;
  puVar9 = PTR_PTR_10111c948;
  do {
    if (piVar5 == (int *)0x0) {
      return 0xffffffff;
    }
    iVar1 = *piVar5;
    while (iVar1 != 0) {
      piVar5 = piVar5 + 1;
      if (iVar1 == param_2) {
        if (puVar9 == (undefined *)0x0) {
          return 0xffffffff;
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = *(undefined4 *)(puVar9 + 8);
          }
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = *(undefined4 *)(puVar9 + 0xc);
          }
          uVar6 = _CGImageSourceGetCount();
          if (uVar6 == 0) {
            return 0xffffffff;
          }
          uVar2 = *(undefined8 *)PTR__kCGImagePropertyPixelWidth_100ba2420;
          uVar3 = *(undefined8 *)PTR__kCGImagePropertyPixelHeight_100ba2418;
          uVar4 = *(undefined8 *)PTR__kCGImagePropertyDepth_100ba2410;
          local_54 = 0xffffffff;
          uVar11 = 0;
          do {
            lVar7 = _CGImageSourceCopyPropertiesAtIndex(*(undefined8 *)(param_1 + 0x10),uVar11,0);
            local_34 = 0;
            local_38 = 0;
            lVar8 = _CFDictionaryGetValue(lVar7,uVar2);
            if (lVar8 != 0) {
              _CFNumberGetValue(lVar8,3,&local_34);
            }
            lVar8 = _CFDictionaryGetValue(lVar7,uVar3);
            if (lVar8 != 0) {
              _CFNumberGetValue(lVar8,3,&local_38);
            }
            bVar10 = 1;
            if ((local_34 == *(int *)(puVar9 + 8)) && (local_38 == *(int *)(puVar9 + 0xc))) {
              lVar8 = _CFDictionaryGetValue(lVar7,uVar4);
              bVar10 = 1;
              if ((lVar8 != 0) && (_CFNumberGetValue(lVar8,3,&local_38), local_38 == 8)) {
                bVar10 = 0;
              }
              local_54 = (undefined4)uVar11;
            }
            if (lVar7 != 0) {
              _CFRelease(lVar7);
            }
            uVar11 = uVar11 + 1;
          } while ((bool)(bVar10 & uVar11 < uVar6));
          return local_54;
        }
        return 0xffffffff;
      }
      iVar1 = *piVar5;
    }
    piVar5 = *(int **)(puVar9 + 0x18);
    puVar9 = puVar9 + 0x18;
  } while( true );
}

