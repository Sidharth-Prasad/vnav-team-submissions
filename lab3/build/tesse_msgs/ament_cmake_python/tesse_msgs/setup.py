from setuptools import find_packages
from setuptools import setup

setup(
    name='tesse_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('tesse_msgs', 'tesse_msgs.*')),
)
