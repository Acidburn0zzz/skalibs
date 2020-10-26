/* ISC license. */

#include <skalibs/nonposix.h>
#include <fcntl.h>
#include <skalibs/djbunix.h>

int open_exclcoe (char const *fn)
{
  return open3(fn, O_WRONLY | O_CREAT | O_EXCL | O_NONBLOCK | O_CLOEXEC, 0666) ;
}
