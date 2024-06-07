// From https://github.com/Homebrew/homebrew-core/blob/8603e1ea96c7eb2fc2dd38a85d75182f480ed8c1/Formula/lib/libpng.rb
#include <png.h>

int main()
{
  png_structp png_ptr;
  png_ptr = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
  png_destroy_write_struct(&png_ptr, (png_infopp)NULL);
  return 0;
}
