
undefined1 FUN_1004a2140(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar7;
  undefined1 local_31;
  uint local_30;
  uint local_2c;
  
  uVar7 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
  if (*(long *)(param_1 + 8) == 0) {
    uVar5 = 0;
  }
  else {
    iVar1 = FUN_1004a1f30(param_1,param_2,&local_2c,&local_30);
    if (iVar1 < 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      lVar2 = _CGImageSourceCreateImageAtIndex(*(undefined8 *)(param_1 + 0x10),(long)iVar1,0);
      if (lVar2 != 0) {
        uVar6 = (ulong)local_2c;
        local_31 = 0;
        FUN_1004a1550(param_3,(ulong)local_30 * uVar6 * 4,&local_31);
        lVar3 = _CGColorSpaceCreateDeviceRGB();
        lVar4 = _CGBitmapContextCreate
                          (*param_3,local_2c,local_30,8,uVar6 * 4,lVar3,CONCAT44(uVar7,0x2002));
        _CGContextSetBlendMode(lVar4,0x11);
        _CGContextDrawImage(lVar4,lVar2);
        if (lVar4 != 0) {
          _CGContextRelease(lVar4);
        }
        if (lVar3 != 0) {
          _CGColorSpaceRelease(lVar3);
        }
        _CGImageRelease(lVar2);
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

