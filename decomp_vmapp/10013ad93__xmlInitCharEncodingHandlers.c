
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlInitCharEncodingHandlers(void)

{
  char local_12 [2];
  char *local_10;
  
  local_12[0] = '4';
  local_12[1] = '\x12';
  local_10 = local_12;
  if (DAT_1011b76e0 == 0) {
    DAT_1011b76e0 = (*(code *)_xmlMalloc)(400);
    if (*local_10 == '\x12') {
      DAT_10110d748 = 0;
    }
    else if (*local_10 == '4') {
      DAT_10110d748 = 1;
    }
    else {
      FUN_1001384a6(1,"Odd problem at endianness detection\n",0);
    }
    if (DAT_1011b76e0 == 0) {
      FUN_100138478("xmlInitCharEncodingHandlers : out of memory !\n");
    }
    else {
      _xmlNewCharEncodingHandler("UTF-8",FUN_100138af8,FUN_100138af8);
      DAT_1011b76c0 = _xmlNewCharEncodingHandler("UTF-16LE",FUN_100138e5b,FUN_10013917f);
      DAT_1011b76c8 = _xmlNewCharEncodingHandler("UTF-16BE",FUN_1001395b6,FUN_1001398e8);
      _xmlNewCharEncodingHandler("UTF-16",FUN_100138e5b,FUN_100139524);
      _xmlNewCharEncodingHandler("ISO-8859-1",_isolat1ToUTF8,_UTF8Toisolat1);
      _xmlNewCharEncodingHandler("ASCII",FUN_100138541,FUN_1001386a3);
      _xmlNewCharEncodingHandler("US-ASCII",FUN_100138541,FUN_1001386a3);
      _xmlNewCharEncodingHandler("HTML",(xmlCharEncodingInputFunc)0x0,_UTF8ToHtml);
      FUN_10013cd12();
    }
  }
  return;
}

