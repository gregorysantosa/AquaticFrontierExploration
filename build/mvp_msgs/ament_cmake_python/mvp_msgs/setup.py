from setuptools import find_packages
from setuptools import setup

setup(
    name='mvp_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('mvp_msgs', 'mvp_msgs.*')),
)
