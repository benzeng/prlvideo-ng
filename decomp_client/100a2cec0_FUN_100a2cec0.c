
long FUN_100a2cec0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _CFStringCompare(param_2,*(undefined8 *)PTR__kUTTypeUTF16PlainText_1021e1c30,0);
  lVar2 = 1;
  if (lVar1 != 0) {
    lVar1 = _CFStringCompare(param_2,*(undefined8 *)PTR__kUTTypeUTF8PlainText_1021e1c38,0);
    if (lVar1 != 0) {
      lVar1 = _CFStringCompare(param_2,&cf_com_apple_traditional_mac_plain_text,0);
      lVar2 = 2;
      if (lVar1 != 0) {
        lVar1 = _CFStringCompare(param_2,*(undefined8 *)PTR__kUTTypeBMP_1021e1be8,0);
        lVar2 = 0x44;
        if (lVar1 != 0) {
          lVar1 = _CFStringCompare(param_2,*(undefined8 *)PTR__kUTTypeTIFF_1021e1c20,0);
          if (lVar1 != 0) {
            lVar1 = _CFStringCompare(param_2,*(undefined8 *)PTR__kUTTypePNG_1021e1c10,0);
            if (lVar1 != 0) {
              lVar1 = _CFStringCompare(param_2,*(undefined8 *)PTR__kUTTypePDF_1021e1c08,0);
              if (lVar1 != 0) {
                lVar1 = _CFStringCompare(param_2,*(undefined8 *)PTR__kUTTypeRTF_1021e1c18,0);
                lVar2 = 8;
                if (lVar1 != 0) {
                  lVar1 = _CFStringCompare(param_2,*(undefined8 *)PTR__kUTTypeHTML_1021e1c00,0);
                  lVar2 = 0x10;
                  if (lVar1 != 0) {
                    lVar1 = _CFStringCompare(param_2,*(undefined8 *)PTR__kUTTypeFileURL_1021e1bf8,0)
                    ;
                    lVar2 = (ulong)(lVar1 == 0) << 5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return lVar2;
}

